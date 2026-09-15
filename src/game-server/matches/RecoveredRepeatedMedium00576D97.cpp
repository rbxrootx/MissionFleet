extern "C" void Call005761F1();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered00576D97()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm lea eax, [ebp + 0x14]
    __asm mov dword ptr [ebp - 8], eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm and ecx, 0xffff
    __asm and ecx, 0x4000
    __asm test ecx, ecx
    __asm je loc_00576DCD
    __asm mov dx, word ptr [ebp + 0x10]
    __asm and dx, 0xbfff
    __asm mov word ptr [ebp + 0x10], dx
    __asm mov ax, word ptr [ebp + 0x10]
    __asm or al, 0x40
    __asm mov word ptr [ebp + 0x10], ax
loc_00576DCD:
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm and ecx, 0xffff
    __asm cmp ecx, 8
    __asm jne loc_00576DE1
    __asm mov word ptr [ebp + 0x10], 0xe
loc_00576DE1:
    __asm mov dl, byte ptr [ebp + 0x10]
    __asm mov byte ptr [ebp - 0xc], dl
    __asm mov byte ptr [ebp - 0xb], 0
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm and eax, 0xffff
    __asm sub eax, 9
    __asm neg eax
    __asm sbb eax, eax
    __asm and al, 0xfc
    __asm add eax, 8
    __asm mov word ptr [ebp - 4], ax
    __asm mov ecx, dword ptr [ebp - 8]
    __asm push ecx
    __asm lea edx, [ebp - 0xc]
    __asm push edx
    __asm push 0
    __asm push 0
    __asm mov ax, word ptr [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call005761F1
    __asm mov dword ptr [ebp - 8], 0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
