// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518874 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00518874_00518874() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 65 FB FF: call 0x4cee04
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x65
        __asm _emit 0xfb
        __asm _emit 0xff
        push 674ebch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        push ecx
        push 674each
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DC 41 FB FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push 674ed4h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 674ec0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 93 01 01 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 74 FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push 674eech
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8ch
        push ecx
        push 674ed8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 8C 41 FB FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push 674f08h
        mov edx, dword ptr [ebp - 4]
        add edx, 90h
        push edx
        push 674ef0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 63 41 FB FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 FF 00 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
