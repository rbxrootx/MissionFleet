// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F3BA .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_5883f3ba_5883F3BA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588927eeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        push 1
        ; Exact mapped bytes E8 26 01 00 00: call 0x5883f50c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0B: je 0x5883f3f6
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi]
        ; Exact mapped bytes E8 59 1C FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi], 0
        pop ecx
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 0D: je 0x5883f409
        __asm _emit 0x74
        __asm _emit 0x0d
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 47 1C FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 8], 0
        pop ecx
        lea ecx, [esi + 24h]
        ; Exact mapped bytes E8 C4 74 00 00: call 0x588468d5
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 24h]
        ; Exact mapped bytes E8 91 FE FF FF: call 0x5883f2aa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
