// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00448942 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00448942_00448942() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cb4h]
        ; Exact mapped bytes E8 1A DB FB FF: call 0x406487
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 64 FE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
