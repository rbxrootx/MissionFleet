// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8C20 .. +0x3C bytes.
extern "C" __declspec(naked) void FID_conflict____CxxFrameHandler3_004A8C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cld
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C4 94 00 00: call 0x4b2110
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 4], eax
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
