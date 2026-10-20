// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858B680 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5858b680_5858B680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        sub esp, 0ch
        mov eax, esp
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3D 18 00 00: call 0x5858cf00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 82 59 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x59
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
