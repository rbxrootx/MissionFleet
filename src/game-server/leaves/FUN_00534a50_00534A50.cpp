// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534A50 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00534a50_00534A50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 7C E8 5D 00 00: cmp dword ptr [0x5de87c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x534a65
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x534ab5
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 27: jne 0x534a95
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c7710h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 AC C0 F7 FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x534a8d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x534a6e
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes EB 20: jmp 0x534ab5
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
