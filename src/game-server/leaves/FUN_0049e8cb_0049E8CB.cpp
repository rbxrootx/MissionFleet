// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049E8CB .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_0049e8cb_0049E8CB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x49e904
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 6A 15 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49e904
        __asm _emit 0x75
        __asm _emit 0x14
        push 3bfh
        push 5cbe8ch
        ; Exact mapped bytes E8 01 61 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49e904
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x49e8d4
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 30 09 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x49e952
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes EB 09: jmp 0x49e921
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        add eax, 10h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x49e950
        __asm _emit 0x74
        __asm _emit 0x1f
        sub esp, 10h
        mov ecx, esp
        mov dword ptr [ebp - 4], esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5E E5 FF FF: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4C F5 FF FF: call 0x49de9a
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB C8: jmp 0x49e918
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB 2A: jmp 0x49e97c
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 09: jmp 0x49e95d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10h
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x49e97c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 84 F9 FF FF: call 0x49e2fe
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D8: jmp 0x49e954
        __asm _emit 0xeb
        __asm _emit 0xd8
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
