// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481730 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_00481730_00481730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 AF F4 FF FF: call 0x480c00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 AC B5 FF FF: call 0x47cd10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 08: jne 0x481778
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        or al, 2
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
