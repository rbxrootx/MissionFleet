// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B45F0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587b45f0_587B45F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 B8 2E CD FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2e
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 E5 FF FF: call 0x587b2be0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        or eax, 1
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
