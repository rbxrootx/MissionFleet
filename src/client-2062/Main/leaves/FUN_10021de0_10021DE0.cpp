// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021DE0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_10021de0_10021DE0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x10021e16
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esp + 4]
        cmp eax, ecx
        ; Exact mapped bytes 7E 02: jle 0x10021df2
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, ecx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov eax, dword ptr [eax*4 + 101b7a20h]
        imul eax, dword ptr [esp + 0ch]
        cdq
        ; Exact mapped bytes F7 3D BC 89 1B 10: idiv dword ptr [0x101b89bc]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x10
        inc eax
        ret
        xor eax, eax
        ret
    }
}
