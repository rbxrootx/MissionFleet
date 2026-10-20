// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839480 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58839480_58839480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        push 588f1868h
        mov dword ptr [ebp - 48h], eax
        xor edi, edi
        ; Exact mapped bytes E8 AE 2E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588f187ch
        mov esi, eax
        ; Exact mapped bytes E8 9A 2E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 D5 D6 FF FF: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        push 588f189ch
        mov ebx, eax
        ; Exact mapped bytes E8 86 2E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 C1 D6 FF FF: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 48h]
        mov ecx, eax
        mov eax, edi
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x588394f0
        __asm _emit 0x74
        __asm _emit 0x10
        push edi
        push 40h
        lea eax, [ebp - 44h]
        push eax
        push 400000h
        push dword ptr [esi]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test ebx, ebx
        ; Exact mapped bytes 74 15: je 0x58839509
        __asm _emit 0x74
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x5883950d
        __asm _emit 0x75
        __asm _emit 0x15
        push edi
        push 40h
        lea eax, [ebp - 44h]
        push eax
        push 400000h
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58839512
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [ebp - 20h]
        not edi
        mov ecx, dword ptr [ebp - 4]
        mov eax, edi
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 2F 7B FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
