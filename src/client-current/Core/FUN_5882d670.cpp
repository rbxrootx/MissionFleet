// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D670 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5882d670() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21ch], 0
        ; Exact mapped bytes 74 2D: je 0x5882d6b0
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 27: je 0x5882d6b0
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 220h
        ; Exact mapped bytes E8 55 FF FF FF: call 0x5882d5f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 21ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
