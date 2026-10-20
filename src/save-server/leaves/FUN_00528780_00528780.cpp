// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528780 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00528780_00528780() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D D4 6C 68 00 00: cmp dword ptr [0x686cd4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x528795
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x5287e5
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 27: jne 0x5287c5
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 673b00h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 AC 46 F4 FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x5287bd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x52879e
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes EB 20: jmp 0x5287e5
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
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
