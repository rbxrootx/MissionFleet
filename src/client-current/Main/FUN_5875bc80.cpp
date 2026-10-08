// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 214 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875bc80.

// Ghidra body range 0x5875BC80..0x5875BD56; 214 mapped bytes.
extern "C" __declspec(naked) void FUN_5875bc80_segment_00() {
    __asm {
        // 0x5875BC80: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875BC84: push esi
        __asm _emit 0x56
        // 0x5875BC85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875BC87: mov dword ptr [esi + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BC8D: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BC92: push edi
        __asm _emit 0x57
        // 0x5875BC93: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875BC97: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BC9C: mov eax, 0x32
        __asm _emit 0xB8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCA1: mov word ptr [esi + 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCA8: mov word ptr [esi + 0x126], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCAF: mov word ptr [esi + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCB6: mov dword ptr [esi + 0x15c], 0x4b
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCC0: mov dword ptr [esi + 0x160], 0x2d
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCCA: mov cx, word ptr [edi + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCD1: mov word ptr [esi + 0x11e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCD8: mov dword ptr [esi + 0x174], 0x44
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCE2: mov dword ptr [esi + 0x178], 0x3c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BCEC: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x0F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875BCF1: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875BCF6: jns 0x5875bcfd
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5875BCF8: dec eax
        __asm _emit 0x48
        // 0x5875BCF9: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x5875BCFC: inc eax
        __asm _emit 0x40
        // 0x5875BCFD: add eax, 0x42
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x42
        // 0x5875BD00: mov dword ptr [esi + 0x17c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD06: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x0F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875BD0B: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875BD10: jns 0x5875bd17
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5875BD12: dec eax
        __asm _emit 0x48
        // 0x5875BD13: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x5875BD16: inc eax
        __asm _emit 0x40
        // 0x5875BD17: add eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x26
        // 0x5875BD1A: mov dword ptr [esi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD20: mov dx, word ptr [edi + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD27: mov word ptr [esi + 0x11a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD2E: mov ax, word ptr [edi + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD35: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD3A: xor word ptr [esi + 0x11a], cx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x8E
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD41: mov word ptr [esi + 0x11c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD48: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875BD4A: xor word ptr [esi + 0x11c], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BD51: pop edi
        __asm _emit 0x5F
        // 0x5875BD52: pop esi
        __asm _emit 0x5E
        // 0x5875BD53: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
