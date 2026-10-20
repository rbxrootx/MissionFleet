// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476CE0 .. +0xD7 bytes.
extern "C" __declspec(naked) void __cropzeros_00476CE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x476d0a
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        ; Exact mapped bytes 0F BE 0D D0 E0 67 00: movsx ecx, byte ptr [0x67e0d0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 74 0B: je 0x476d0a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB DA: jmp 0x476ce4
        __asm _emit 0xeb
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x476db3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x476d4c
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 65h
        ; Exact mapped bytes 74 16: je 0x476d4c
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 45h
        ; Exact mapped bytes 74 0B: je 0x476d4c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB D5: jmp 0x476d21
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 75 0B: jne 0x476d71
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB EA: jmp 0x476d5b
        __asm _emit 0xeb
        __asm _emit 0xea
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 15 D0 E0 67 00: movsx edx, byte ptr [0x67e0d0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        cmp ecx, edx
        ; Exact mapped bytes 75 09: jne 0x476d8b
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x476db3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D8: jmp 0x476d8b
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov esp, ebp
        pop ebp
        ret
    }
}
