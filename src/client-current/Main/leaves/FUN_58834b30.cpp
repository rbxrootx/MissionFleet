// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834B30 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_58834b30() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        mov dword ptr [edi], 0
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x58834b51
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 18h]
        cmp dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 77 05: ja 0x58834b51
        __asm _emit 0x77
        __asm _emit 0x05
        cmp eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 09: jbe 0x58834b5a
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 1C 81 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esi]
        mov dword ptr [edi], ecx
        mov dword ptr [edi + 4], eax
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 77 05: ja 0x58834b6f
        __asm _emit 0x77
        __asm _emit 0x05
        cmp ebx, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 09: jbe 0x58834b78
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 FE 80 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x58834b84
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, ecx
        ; Exact mapped bytes 74 05: je 0x58834b89
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 E9 80 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 25: je 0x58834bb5
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esi + 10h]
        mov byte ptr [esp + 10h], 0
        mov edx, dword ptr [esp + 10h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 51 F7 FF FF: call 0x58834300
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [esi + 10h], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
