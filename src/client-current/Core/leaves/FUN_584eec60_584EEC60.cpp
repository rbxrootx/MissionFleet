// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEC60 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_584eec60_584EEC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 400h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x584eec8a
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 1F: je 0x584eeca7
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes EB 34: jmp 0x584eecbe
        __asm _emit 0xeb
        __asm _emit 0x34
        movzx edx, word ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 FE FF FF: call 0x584eeb90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 17: jmp 0x584eecbe
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 FF FF FF: call 0x584eec00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
