/* 
    This file is part of Sqwee.

    Sqwee is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Sqwee is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Sqwee.  If not, see <http://www.gnu.org/licenses/>.
*/

function edit(page) {
	new Ajax.Updater("main", "index.rhtml", {
		parameters: { page: page, action: 'edit' },
		onLoading: function(transport) {
			$("edit_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			$("edit_button").setOpacity(1);
			$('actionbar').hide();
		}
	});
}

function search() {
	new Ajax.Updater("main", "index.rhtml", {
		parameters: { action: 'find',
	       		search_value: $F('search_value')
		},
		onLoading: function(transport) {
			$("search_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			$("search_button").setOpacity(1);
			$('actionbar').hide();
			new Ajax.Updater("page_title", "index.rhtml", {
				parameters: { action: 'reload_title',
						current_page: 'Search' }
			});
		}

	});
}

function editNav() {
	new Ajax.Updater("nav", "index.rhtml", {
		parameters: { action: 'editnav' },
		onLoading: function(transport) {
			$("nav_edit_button").setOpacity(0.5);
		}
	});
}

function newPage(last_page) {
	new Ajax.Updater("main", "index.rhtml", {
		parameters: { action: 'new',
				last_page: last_page },
		onLoading: function(transport) {
			$("new_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			$('actionbar').hide();
			$("new_button").setOpacity(1);
			new Ajax.Updater("page_title", "index.rhtml", {
				parameters: { action: 'reload_title',
						current_page: 'New' }
			});
		}
	});
}

function confirmDelete(page) {
	new Ajax.Updater("main", "index.rhtml", {
		parameters: { action: 'confirm_delete',
				page: page
		},
		onSuccess: function(transport) {
			$('actionbar').hide();
		}
	});
}

function deletePage(page) {
	new Ajax.Updater("main", "index.rhtml", {
		parameters: { action: 'delete', page: page }
		}
	);
}

function quickSave(page) {
	new Ajax.Updater("original_content", "index.rhtml", {
		parameters: { page: page,
				action: 'quicksave',
			        content: $F('content'),
				old_content: $F('original_content')
			},
		onLoading: function(transport) {
			$("quick_save_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			$("quick_save_button").setOpacity(1);
		}
	});
}

function save(page, el) {
	if(el == null)
		el = "main";
	new Ajax.Updater(el, "index.rhtml", {
		parameters: { page: page,
				action: 'save',
			        content: $F('content'),
				old_content: $F('original_content')
			},
		onLoading: function(transport) {
			if(page != "nav")
				$("save_button").setOpacity(0.5);
			else
				$("nav_save_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			if(page != "nav") {
				$('actionbar').show();
				$("save_button").setOpacity(1);
			}
			else
				$("nav_save_button").setOpacity(1);
		}
	});
}

function saveNew() {
	page = $F('title');
	new Ajax.Updater("main", "index.rhtml", {
		parameters: { page: $F('title'),
				title: $F('title'),
				action: 'save',
			        content: $F('content')
			},
		onLoading: function(transport) {
			$("save_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
				$('actionbar').show();
				new Ajax.Updater("actionbar", "index.rhtml", {
					parameters: { action: 'reload_actionbar',
							page: page
				}
				});
				new Ajax.Updater("page_title", "index.rhtml", {
					parameters: { action: 'reload_title',
							current_page: page
				}
				});
			}
	});
}

function cancelEdit(page) {
	if(page == "nav") {
		new Ajax.Updater("nav", "index.rhtml", {
			parameters: {
				page: "nav",
				action: "shownav"
		},
		onLoading: function(transport) {
				$("nav_cancel_button").setOpacity(0.5);
			},
			onSuccess: function(transport) {
				$("nav_cancel_button").setOpacity(1);
			}
		});
	}
	else {
		new Ajax.Updater("main", "index.rhtml", {
 			parameters: { page: page,
 					action: 'show'
 				},
			onLoading: function(transport) {
				$("cancel_button").setOpacity(0.5);
			},
			onSuccess: function(transport) {
				$('actionbar').show();
				$("cancel_button").setOpacity(1);
				
				//If we do not know where we came from, go back to the
				//index
				if(page == "") {
					new Ajax.Updater("actionbar", "index.rhtml", {
							parameters: { action: 'reload_actionbar',
								page: "Index"
					}
					});
					new Ajax.Updater("page_title", "index.rhtml", {
						parameters: { action: 'reload_title',
								current_page: 'Index'
					}
					});
				}	
				else {
	
					new Ajax.Updater("actionbar", "index.rhtml", {
						parameters: { action: 'reload_actionbar',
									page: page
					}
					});
					new Ajax.Updater("page_title", "index.rhtml", {
						parameters: { action: 'reload_title',
								current_page: page
					}
					});
				}
			}
		});
	}
}

function revertEdit(page) {
	new Ajax.Updater("content_span", "index.rhtml", {
		parameters: { page: page,
				action: 'revert'
				},
		onLoading: function(transport) {
			$("revert_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			$("revert_button").setOpacity(1);
		}
	});
}	

function revertEditNav() {
	new Ajax.Updater("nav_content_span", "index.rhtml", {
		parameters: { page: "nav",
				action: 'revert'
				},
		onLoading: function(transport) {
			$("nav_revert_button").setOpacity(0.5);
		},
		onSuccess: function(transport) {
			$("nav_revert_button").setOpacity(1);
		}

	});
}

function undoEdit(page) {
	new Ajax.Updater("content", "index.rhtml", {
		parameters: { page: page,
				action: 'show_rc'
			}
	});
}

function checkPage() {
	page = $F('title');
	new Ajax.Updater("content", "index.rhtml", {
		parameters: { test_page: page,
				action: 'checkpage'
			}
	});
}

