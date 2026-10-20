// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748D40 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58748d40_58748D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4e30h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 27: je 0x58748d85
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 BF 82 0E 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 9D D3 FF: call 0x58482b50
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
