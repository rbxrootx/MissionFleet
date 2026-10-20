// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531AE7 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00531ae7_00531AE7() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x531b04
        __asm _emit 0x75
        __asm _emit 0x11
        push 19h
        push 636640h
        ; Exact mapped bytes E8 41 72 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x531b04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x531aed
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes E8 54 EB 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
