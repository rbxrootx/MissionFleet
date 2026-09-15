// Exact shared compiler runtime support primitive.
extern "C" __declspec(naked) void Recovered004A97C0()
{
    __asm push ecx
    __asm cmp eax, 4096
    __asm lea ecx, [esp+8]
    __asm jb final_page
    __asm probe_page:
    __asm sub ecx, 4096
    __asm sub eax, 4096
    __asm test dword ptr [ecx], eax
    __asm cmp eax, 4096
    __asm jae probe_page
    __asm final_page:
    __asm sub ecx, eax
    __asm mov eax, esp
    __asm test dword ptr [ecx], eax
    __asm mov esp, ecx
    __asm mov ecx, dword ptr [eax]
    __asm mov eax, dword ptr [eax+4]
    __asm push eax
    __asm ret
}
