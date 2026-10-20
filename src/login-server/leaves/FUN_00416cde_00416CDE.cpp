// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416CDE .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_00416cde_00416CDE() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov ebx, ecx
        ; Exact mapped bytes 66 81 7F 02 FF FF: cmp word ptr [edi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 10h]
        ; Exact mapped bytes 74 03: je 0x416cf5
        __asm _emit 0x74
        __asm _emit 0x03
        lea eax, [edi + 8]
        movzx eax, word ptr [eax]
        lea eax, [eax*4 + 4]
        push eax
        ; Exact mapped bytes E8 DF 86 00 00: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 14h]
        pop ecx
        test eax, eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 74 11: je 0x416d22
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebx]
        push eax
        push edi
        mov ecx, ebx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        test eax, eax
        mov dword ptr [esi], eax
        ; Exact mapped bytes 75 02: jne 0x416d22
        __asm _emit 0x75
        __asm _emit 0x02
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
