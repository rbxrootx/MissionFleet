// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432E36 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00432e36_00432E36() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov esi, ecx
        test esi, esi
        ; Exact mapped bytes 74 55: je 0x432e98
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [esi + 2ch]
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 74 3F: je 0x432e90
        __asm _emit 0x74
        __asm _emit 0x3f
        push edi
        lea edi, [esi + 20h]
        lea eax, [ebp - 4]
        mov ecx, edi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F8 A9 FF FF: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 40h]
        add eax, dword ptr [ebp - 4]
        and dword ptr [eax], 0
        cmp dword ptr [esi + 44h], 2
        ; Exact mapped bytes 75 04: jne 0x432e7b
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x432e89
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 C6: jne 0x432e55
        __asm _emit 0x75
        __asm _emit 0xc6
        pop edi
        lea ecx, [esi + 20h]
        ; Exact mapped bytes E8 F5 A7 FF FF: call 0x42d68d
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        leave
        ret
    }
}
