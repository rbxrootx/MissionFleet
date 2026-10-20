// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CF0D0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_586cf0d0_586CF0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 00 5C 90 58 00: cmp dword ptr [0x58905c00], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 31: je 0x586cf113
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 8], ecx
        push 58905c58h
        push 58905c3ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 63 DE FF: call 0x584b54f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 00 5C 90 58 00 00 00 00: mov dword ptr [0x58905c00], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x586cf142
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 0ch], edx
        push 58905c20h
        push 58905c04h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B8 63 DE FF: call 0x584b54f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 00 5C 90 58 01 00 00 00: mov dword ptr [0x58905c00], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
