// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005122FD .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_005122fd_005122FD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 24: je 0x512331
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x512331
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 45 FC FF: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x512424
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 A7 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x512342
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x512424
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 53: jne 0x51239b
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 B6 01 00: call 0x52d996
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x51239b
        __asm _emit 0x75
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x512377
        __asm _emit 0x74
        __asm _emit 0x14
        push 1cfh
        push 673dc0h
        ; Exact mapped bytes E8 CE 69 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512377
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x512354
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        or al, 80h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x5123ea
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 49: je 0x5123ea
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x5123ea
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and cl, 7fh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 94 00 00 00: call dword ptr [edx + 0x94]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 78 BF 68 00: call dword ptr [0x68bf78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 0E: jne 0x5123ea
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 1
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 92 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x51240e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51240e
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 1
        push 86h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 92 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffffff0h
        add ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 00 00 00: call 0x51242d
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
