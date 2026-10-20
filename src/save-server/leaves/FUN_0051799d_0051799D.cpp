// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051799D .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_0051799d_0051799D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 3edh
        push 674cach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A4 28 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5179d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 3eeh
        push 674cach
        ; Exact mapped bytes E8 6F 13 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5179d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5179bc
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6378d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 27 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x517a01
        __asm _emit 0x75
        __asm _emit 0x14
        push 3efh
        push 674cach
        ; Exact mapped bytes E8 44 13 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517a01
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5179dc
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 FF FF FF: call 0x517954
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 73 14: jae 0x517a30
        __asm _emit 0x73
        __asm _emit 0x14
        push 3f2h
        push 674cach
        ; Exact mapped bytes E8 15 13 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517a30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x517a16
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 FE FF FF: call 0x517916
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
