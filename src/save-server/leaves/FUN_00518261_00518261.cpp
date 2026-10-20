// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518261 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00518261_00518261() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 87 FB FF: call 0x4d0991
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 28h
        ; Exact mapped bytes 74 14: je 0x51829f
        __asm _emit 0x74
        __asm _emit 0x14
        push 4f9h
        push 674cach
        ; Exact mapped bytes E8 A6 0A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51829f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x518282
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40h]
        and eax, 8
        cmp eax, 8
        ; Exact mapped bytes 74 14: je 0x5182c7
        __asm _emit 0x74
        __asm _emit 0x14
        push 4fah
        push 674cach
        ; Exact mapped bytes E8 7E 0A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5182c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x5182a5
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
