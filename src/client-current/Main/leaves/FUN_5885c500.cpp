// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C500 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5885c500() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ach]
        cmp dword ptr [ecx + 0bch], 270fh
        ; Exact mapped bytes 7F 09: jg 0x5885c51e
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ecx + 0bch]
        push eax
        ; Exact mapped bytes EB 05: jmp 0x5885c523
        __asm _emit 0xeb
        __asm _emit 0x05
        push 270fh
        ; Exact mapped bytes E8 08 B8 F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b0h]
        cmp dword ptr [ecx + 0bch], 270fh
        ; Exact mapped bytes 7F 0E: jg 0x5885c548
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 0bch]
        push edx
        ; Exact mapped bytes E8 EA B7 F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb7
        __asm _emit 0xf6
        __asm _emit 0xff
        pop esi
        ret
        push 270fh
        ; Exact mapped bytes E8 DE B7 F6 FF: call 0x587c7d30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb7
        __asm _emit 0xf6
        __asm _emit 0xff
        pop esi
        ret
    }
}
