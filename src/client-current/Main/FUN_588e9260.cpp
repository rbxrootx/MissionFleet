// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9260 .. +0x4D bytes.
// Source symbol alias: FUN_588e9260.
extern "C" __declspec(naked) void FUN_588e9260() {
    __asm {
        // 0x588E9260: push ebx
        __asm _emit 0x53
        // 0x588E9261: push esi
        __asm _emit 0x56
        // 0x588E9262: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588E9264: push edi
        __asm _emit 0x57
        // 0x588E9265: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588E9267: lea edi, [ebx + 0x9a4]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E926D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588E9270: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588E9272: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E9274: je 0x588e92a0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588E9276: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E9278: push esi
        __asm _emit 0x56
        // 0x588E9279: push eax
        __asm _emit 0x50
        // 0x588E927A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588E927C: call 0x588e7700
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9281: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E9283: jne 0x588e92a0
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588E9285: push eax
        __asm _emit 0x50
        // 0x588E9286: push eax
        __asm _emit 0x50
        // 0x588E9287: push eax
        __asm _emit 0x50
        // 0x588E9288: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588E928A: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588E928D: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588E928F: push ecx
        __asm _emit 0x51
        // 0x588E9290: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E9296: push 0x80011035
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588E929B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E92A0: inc esi
        __asm _emit 0x46
        // 0x588E92A1: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588E92A4: cmp esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x20
        // 0x588E92A7: jl 0x588e9270
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x588E92A9: pop edi
        __asm _emit 0x5F
        // 0x588E92AA: pop esi
        __asm _emit 0x5E
        // 0x588E92AB: pop ebx
        __asm _emit 0x5B
        // 0x588E92AC: ret
        __asm _emit 0xC3
    }
}
