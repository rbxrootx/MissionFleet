// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E30B .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_0047e30b_0047E30B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 1F: je 0x47e372
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A4 F0 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 34h], 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 53 C1 F8 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 38h], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 4F A4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
