// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC690 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004cc690_004CC690() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 86 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x4cc6fb
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 86 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x4cc6cb
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ah
        push 6714ach
        ; Exact mapped bytes E8 7A C6 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc6cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4cc6aa
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 85 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7F 0F: jg 0x4cc6f3
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 85 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7E FF FF FF: call 0x4cc671
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 85 05 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
