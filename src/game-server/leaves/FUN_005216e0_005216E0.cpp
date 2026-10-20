// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005216E0 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_005216e0_005216E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x5217e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A3 36 FD FF: call 0x4f4da1
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 130h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5217e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 39: jne 0x52175f
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 148h
        ; Exact mapped bytes E8 AD 0E 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 26: jge 0x52175f
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0cch
        ; Exact mapped bytes E8 A0 F5 FF FF: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C1: jmp 0x521720
        __asm _emit 0xeb
        __asm _emit 0xc1
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x521779
        __asm _emit 0x75
        __asm _emit 0x14
        push 37dh
        push 5cc9cch
        ; Exact mapped bytes E8 8C 32 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521779
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52175f
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585e50h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 99 FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5217a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 37eh
        push 5cc9cch
        ; Exact mapped bytes E8 61 32 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5217a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x52177f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x5217c7
        __asm _emit 0x75
        __asm _emit 0x14
        push 37fh
        push 5cc9cch
        ; Exact mapped bytes E8 3E 32 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5217c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5217aa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB 14: jmp 0x5217f4
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 C1 01 00: call 0x53d9b5
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
