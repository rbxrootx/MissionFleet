// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830AEB .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58830aeb_58830AEB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 2
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2D F9 FF FF: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        inc eax
        push esi
        mov dword ptr [edx + 8], eax
        mov esi, dword ptr [eax*4 + 58966220h]
        mov ecx, eax
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x58830b1f
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp esi, edx
        ; Exact mapped bytes 74 0B: je 0x58830b1f
        __asm _emit 0x74
        __asm _emit 0x0b
        inc eax
        mov dword ptr [edx + 8], eax
        mov ecx, eax
        cmp eax, 8
        ; Exact mapped bytes 72 E4: jb 0x58830b03
        __asm _emit 0x72
        __asm _emit 0xe4
        inc byte ptr [ecx + 58966248h]
        mov dword ptr [ecx*4 + 58966220h], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4A F9 FF FF: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        leave
        ret
    }
}
