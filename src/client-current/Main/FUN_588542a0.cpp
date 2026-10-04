// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588542A0 .. +0x54 bytes.
// Source symbol alias: FUN_588542a0.
extern "C" __declspec(naked) void FUN_588542a0() {
    __asm {
        // 0x588542A0: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588542A4: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588542A6: push ebx
        __asm _emit 0x53
        // 0x588542A7: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588542AB: push esi
        __asm _emit 0x56
        // 0x588542AC: push edi
        __asm _emit 0x57
        // 0x588542AD: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588542B0: lea eax, [ecx + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588542B6: mov esi, 4
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588542BB: jmp 0x588542c0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588542BD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588542C0: mov ecx, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x588542C3: movzx edi, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588542C7: mov ebx, 0xfffd
        __asm _emit 0xBB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588542CC: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x588542CF: or di, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xFA
        // 0x588542D2: mov word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588542D6: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588542D8: movzx edi, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588542DC: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x588542DF: or di, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xFA
        // 0x588542E2: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588542E5: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588542E8: mov word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588542EC: jne 0x588542c0
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x588542EE: pop edi
        __asm _emit 0x5F
        // 0x588542EF: pop esi
        __asm _emit 0x5E
        // 0x588542F0: pop ebx
        __asm _emit 0x5B
        // 0x588542F1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
