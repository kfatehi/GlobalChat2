// Generated by IB v0.1.4 gem. Do not edit it manually
// Run `rake design` to refresh

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface GlobalChatController : UIViewController

@property IBOutlet id chat_window_text;
@property IBOutlet id nicks_table;
@property IBOutlet id scroll_view;
@property IBOutlet id chat_message;



-(IBAction) viewDidLoad;
-(IBAction) quit:(id) sender;
-(IBAction) sendMessage:(id) sender;
-(IBAction) scroll_the_scroll_view_down;
-(IBAction) update_chat_views;
-(IBAction) sign_on;
-(IBAction) update_and_scroll;
-(IBAction) parse_line:(id) line;
-(IBAction) post_message:(id) message;
-(IBAction) get_log;
-(IBAction) get_handles;
-(IBAction) sign_out;

@end


@interface ServerListController : UIViewController

@property IBOutlet id names;
@property IBOutlet id server_list_table;
@property IBOutlet UITextField * host;
@property IBOutlet UITextField * port;
@property IBOutlet UITextField * password;
@property IBOutlet id handle;



-(IBAction) load_prefs;
-(IBAction) viewDidLoad;
-(IBAction) get_servers;
-(IBAction) refresh:(id) sender;
-(IBAction) connect:(id) sender;

@end
