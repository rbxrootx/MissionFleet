// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F180 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5851f180_5851F180() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx]
        push edx
        ; Exact mapped bytes E8 C4 BB 33 00: call 0x5885ad58
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbb
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x5851f1a5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5851f1ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
