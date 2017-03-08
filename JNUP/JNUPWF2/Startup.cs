using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(JNUPWF2.Startup))]
namespace JNUPWF2
{
    public partial class Startup {
        public void Configuration(IAppBuilder app) {
            ConfigureAuth(app);
        }
    }
}
