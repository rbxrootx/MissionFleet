// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504342 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00504342_00504342() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0a0h
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 04 5F FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 18h]
        ; Exact mapped bytes 76 0F: jbe 0x504376
        __asm _emit 0x76
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes 73 09: jae 0x50438a
        __asm _emit 0x73
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 1ch], edx
        push 0a9h
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BA 5E FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
