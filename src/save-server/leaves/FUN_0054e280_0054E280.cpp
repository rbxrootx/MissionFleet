// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E280 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_0054e280_0054E280() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 11: je 0x54e2a4
        __asm _emit 0x74
        __asm _emit 0x11
        push 45h
        push 67bee8h
        ; Exact mapped bytes E8 A1 AA FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e2a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54e28a
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54e2c1
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 67bee8h
        ; Exact mapped bytes E8 84 AA FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e2c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x54e2aa
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
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
