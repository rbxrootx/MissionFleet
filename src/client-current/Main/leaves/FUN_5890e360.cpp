// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E360 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5890e360() {
    __asm {
        mov edx, dword ptr [esp + 0ch]
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 2ch]
        push edi
        push ebx
        mov esi, ecx
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esi]
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [eax + 10h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [esi]
        push edi
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [eax + 10h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 14h]
        push edi
        push ebx
        dec eax
        push ebp
        inc ecx
        push eax
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 24h]
        push ecx
        mov dword ptr [esp + 2ch], ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi]
        push edi
        push ebx
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        mov edx, dword ptr [eax + 14h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
