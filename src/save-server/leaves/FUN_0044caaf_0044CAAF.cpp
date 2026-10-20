// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CAAF .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0044caaf_0044CAAF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x44cad2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x44cb0d
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 15: jne 0x44caf0
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0f1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B EB 0D 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xeb
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x44cb0d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 3
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
