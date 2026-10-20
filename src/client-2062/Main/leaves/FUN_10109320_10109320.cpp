// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109320 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_10109320_10109320() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x101093b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x10109390
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 98 51 17 10: call dword ptr [0x10175198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebx, dword ptr [esi + 90h]
        push 0
        mov ecx, esi
        mov edi, eax
        ; Exact mapped bytes E8 C0 AA FF FF: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        lea edx, [ebx + ebx]
        sub ecx, eax
        cmp ecx, edx
        ; Exact mapped bytes 76 35: jbe 0x10109390
        __asm _emit 0x76
        __asm _emit 0x35
        mov edx, dword ptr [esi + 94h]
        mov eax, edi
        sub eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 76 27: jbe 0x10109390
        __asm _emit 0x76
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 5ch]
        push ecx
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 BA 5A FF FF: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 20h]
        sub ecx, edx
        push 0
        mov dword ptr [esi + 20h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 26 AB FF FF: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 94h], edi
        mov ecx, dword ptr [esi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x101093b5
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x101093b0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10109398
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
