// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8C4C .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004f8c4c_004F8C4C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d6bch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 637f6ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1D 38 FD FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 08 38 FD FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC 79 FD FF: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
