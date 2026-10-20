// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58757450 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58757450_58757450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 3020h], 0ch
        mov edx, dword ptr [ebp - 4]
        lea ecx, [edx + ecx + 1814h]
        ; Exact mapped bytes E8 7E 0C D3 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 301ch], 1
        ; Exact mapped bytes E8 6C FD D7 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 12eh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D6 18 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
