// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886DDD8 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5886ddd8() {
    __asm {
        // 0x5886DDD8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886DDDA: push ebp
        __asm _emit 0x55
        // 0x5886DDDB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886DDDD: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886DDE0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5886DDE2: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5886DDE4: js 0x5886ddef
        __asm _emit 0x78
        __asm _emit 0x09
        // 0x5886DDE6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DDE8: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5886DDEA: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5886DDED: pop ebp
        __asm _emit 0x5D
        // 0x5886DDEE: ret
        __asm _emit 0xC3
        // 0x5886DDEF: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5886DDF1: and al, 0xe0
        __asm _emit 0x24
        __asm _emit 0xE0
        // 0x5886DDF3: cmp al, 0xc0
        __asm _emit 0x3C
        __asm _emit 0xC0
        // 0x5886DDF5: jne 0x5886ddfc
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5886DDF7: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5886DDF9: pop eax
        __asm _emit 0x58
        // 0x5886DDFA: pop ebp
        __asm _emit 0x5D
        // 0x5886DDFB: ret
        __asm _emit 0xC3
        // 0x5886DDFC: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x5886DDFE: and al, 0xf0
        __asm _emit 0x24
        __asm _emit 0xF0
        // 0x5886DE00: cmp al, 0xe0
        __asm _emit 0x3C
        __asm _emit 0xE0
        // 0x5886DE02: jne 0x5886de08
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5886DE04: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5886DE06: jmp 0x5886ddf9
        __asm _emit 0xEB
        __asm _emit 0xF1
        // 0x5886DE08: and cl, 0xf8
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0xF8
        // 0x5886DE0B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5886DE0E: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5886DE10: cmp cl, 0xf0
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0xF0
        // 0x5886DE13: pop edx
        __asm _emit 0x5A
        // 0x5886DE14: cmove eax, edx
        __asm _emit 0x0F
        __asm _emit 0x44
        __asm _emit 0xC2
        // 0x5886DE17: pop ebp
        __asm _emit 0x5D
        // 0x5886DE18: ret
        __asm _emit 0xC3
    }
}
