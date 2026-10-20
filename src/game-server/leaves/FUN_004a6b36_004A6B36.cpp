// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6B36 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_004a6b36_004A6B36() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 35bh
        push 5d0270h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0A 46 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        add ecx, 0d8h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax + 0d8h]
        push ecx
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
