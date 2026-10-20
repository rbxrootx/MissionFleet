// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424078 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_00424078_00424078() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        ; Exact mapped bytes 8B 35 1C B0 44 00: mov esi, dword ptr [0x44b01c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        cmp dword ptr [esi + 10h], -1
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x424123
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        lea edi, [esi + 2010h]
        mov ebx, 3ff000h
        cmp dword ptr [edi], 0f0h
        ; Exact mapped bytes 75 39: jne 0x4240df
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, ebx
        push 4000h
        add eax, dword ptr [esi + 10h]
        push 1000h
        push eax
        ; Exact mapped bytes FF 15 A4 C2 43 00: call dword ptr [0x43c2a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x4240df
        __asm _emit 0x74
        __asm _emit 0x1f
        or dword ptr [edi], 0ffffffffh
        ; Exact mapped bytes FF 0D 74 FE 44 00: dec dword ptr [0x44fe74]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4240d4
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, edi
        ; Exact mapped bytes 76 03: jbe 0x4240d7
        __asm _emit 0x76
        __asm _emit 0x03
        mov dword ptr [esi + 0ch], edi
        inc dword ptr [ebp - 4]
        dec dword ptr [ebp + 8]
        ; Exact mapped bytes 74 0D: je 0x4240ec
        __asm _emit 0x74
        __asm _emit 0x0d
        sub ebx, 1000h
        sub edi, 8
        test ebx, ebx
        ; Exact mapped bytes 7D B2: jge 0x42409e
        __asm _emit 0x7d
        __asm _emit 0xb2
        cmp dword ptr [ebp - 4], 0
        mov ecx, esi
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes 74 2C: je 0x424123
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ecx + 18h], -1
        ; Exact mapped bytes 75 26: jne 0x424123
        __asm _emit 0x75
        __asm _emit 0x26
        push 1
        lea eax, [ecx + 20h]
        pop edx
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 0C: jne 0x424114
        __asm _emit 0x75
        __asm _emit 0x0c
        inc edx
        add eax, 8
        cmp edx, 400h
        ; Exact mapped bytes 7C EF: jl 0x424103
        __asm _emit 0x7c
        __asm _emit 0xef
        cmp edx, 400h
        ; Exact mapped bytes 75 07: jne 0x424123
        __asm _emit 0x75
        __asm _emit 0x07
        push ecx
        ; Exact mapped bytes E8 00 FF FF FF: call 0x424022
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes 3B 35 1C B0 44 00: cmp esi, dword ptr [0x44b01c]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x424135
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8F 50 FF FF FF: jg 0x424085
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
