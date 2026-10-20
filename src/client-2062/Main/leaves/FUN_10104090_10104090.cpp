// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104090 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_10104090_10104090() {
    __asm {
        mov eax, dword ptr [ecx + 78h]
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        ; Exact mapped bytes 7E 0C: jle 0x101040a7
        __asm _emit 0x7e
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x101040b2
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [eax + 14h]
        dec ecx
        test ecx, ecx
        ; Exact mapped bytes 7F F4: jg 0x1010409b
        __asm _emit 0x7f
        __asm _emit 0xf4
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x101040b2
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
