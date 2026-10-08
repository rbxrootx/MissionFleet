// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 238 bytes in 1 exact ranges.
// Source symbol alias: FUN_588da8f0.

// Ghidra body range 0x588DA8F0..0x588DA9DE; 238 mapped bytes.
extern "C" __declspec(naked) void FUN_588da8f0_segment_00() {
    __asm {
        // 0x588DA8F0: push ebx
        __asm _emit 0x53
        // 0x588DA8F1: push esi
        __asm _emit 0x56
        // 0x588DA8F2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588DA8F4: mov byte ptr [ecx + 0x60ad], 0
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA8FB: mov edx, 0xb44
        __asm _emit 0xBA
        __asm _emit 0x44
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA900: lea ebx, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x588DA903: mov eax, dword ptr [edx + ecx + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA90A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA90C: je 0x588da92f
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588DA90E: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DA911: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA914: je 0x588da92f
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588DA916: cmp byte ptr [esi + ecx + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA91E: je 0x588da929
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DA920: or byte ptr [ecx + 0x60ad], 0x20
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588DA927: jmp 0x588da92f
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588DA929: or byte ptr [ecx + 0x60ad], bl
        __asm _emit 0x08
        __asm _emit 0x99
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA92F: mov eax, dword ptr [edx + ecx + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA936: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA938: je 0x588da95b
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588DA93A: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DA93D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA940: je 0x588da95b
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588DA942: cmp byte ptr [esi + ecx + 0x21d], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0E
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA94A: je 0x588da955
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DA94C: or byte ptr [ecx + 0x60ad], 0x20
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588DA953: jmp 0x588da95b
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588DA955: or byte ptr [ecx + 0x60ad], bl
        __asm _emit 0x08
        __asm _emit 0x99
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA95B: mov eax, dword ptr [edx + ecx + 0x350]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA962: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA964: je 0x588da987
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588DA966: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DA969: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA96C: je 0x588da987
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588DA96E: cmp byte ptr [esi + ecx + 0x21e], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0E
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA976: je 0x588da981
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DA978: or byte ptr [ecx + 0x60ad], 0x20
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588DA97F: jmp 0x588da987
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588DA981: or byte ptr [ecx + 0x60ad], bl
        __asm _emit 0x08
        __asm _emit 0x99
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA987: mov eax, dword ptr [edx + ecx + 0x354]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA98E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA990: je 0x588da9b3
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588DA992: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x588DA995: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA998: je 0x588da9b3
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588DA99A: cmp byte ptr [esi + ecx + 0x21f], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0E
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9A2: je 0x588da9ad
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DA9A4: or byte ptr [ecx + 0x60ad], 0x20
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588DA9AB: jmp 0x588da9b3
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588DA9AD: or byte ptr [ecx + 0x60ad], bl
        __asm _emit 0x08
        __asm _emit 0x99
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9B3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588DA9B5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588DA9B8: cmp edx, 0xbc4
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9BE: jb 0x588da903
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DA9C4: mov al, byte ptr [ecx + 0x60ad]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9CA: mov byte ptr [ecx + 0x60ac], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9D0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x588DA9D4: pop esi
        __asm _emit 0x5E
        // 0x588DA9D5: mov word ptr [ecx + 0x60ba], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA9DC: pop ebx
        __asm _emit 0x5B
        // 0x588DA9DD: ret
        __asm _emit 0xC3
    }
}
