// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005168DB .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_005168db_005168DB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 85 FB FF: call 0x4cedf1
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 28h
        ; Exact mapped bytes 74 14: je 0x51690a
        __asm _emit 0x74
        __asm _emit 0x14
        push 1f5h
        push 674cach
        ; Exact mapped bytes E8 3B 24 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51690a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5168ed
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x516933
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f6h
        push 674cach
        ; Exact mapped bytes E8 12 24 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516933
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x516910
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 4cd820h
        ; Exact mapped bytes 74 14: je 0x516959
        __asm _emit 0x74
        __asm _emit 0x14
        push 1f7h
        push 674cach
        ; Exact mapped bytes E8 EC 23 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516959
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x516939
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x51697e
        __asm _emit 0x74
        __asm _emit 0x14
        push 1f8h
        push 674cach
        ; Exact mapped bytes E8 C7 23 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51697e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x51695f
        __asm _emit 0x75
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
