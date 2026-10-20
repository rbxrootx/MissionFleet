// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830B6A .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58830b6a_58830B6A() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58830b88
        __asm _emit 0x74
        __asm _emit 0x10
        dec byte ptr [eax + 58966248h]
        mov al, byte ptr [eax + 58966248h]
        test al, al
        ; Exact mapped bytes 7F 1F: jg 0x58830ba7
        __asm _emit 0x7f
        __asm _emit 0x1f
        mov ecx, esi
        ; Exact mapped bytes E8 1B 00 00 00: call 0x58830baa
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 30h]
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x58830ba7
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, esi
        ; Exact mapped bytes E8 A3 67 CD FF: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x67
        __asm _emit 0xcd
        __asm _emit 0xff
        push 8
        push esi
        ; Exact mapped bytes E8 8F 04 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop esi
        pop ebp
        ret
    }
}
