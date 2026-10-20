// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874F040 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5874f040_5874F040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4ee4h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2c4h], 0
        ; Exact mapped bytes 74 27: je 0x5874f085
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2c4h]
        mov dword ptr [ebp - 8], eax
        push 18h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 BF 1F 0E 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2c4h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
