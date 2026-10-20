// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A03DC .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004a03dc_004A03DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 42 C7 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x4a040d
        __asm _emit 0x75
        __asm _emit 0x1c
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 32 FB FF FF: call 0x49ff36
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4a040d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 03: jmp 0x4a0410
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
