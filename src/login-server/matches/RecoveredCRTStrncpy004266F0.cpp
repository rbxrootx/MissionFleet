// Exact shared optimized VC6 strncpy implementation.
extern "C" __declspec(naked) void Recovered004266F0()
{
    __asm mov ecx, dword ptr [esp+0ch]
    __asm push edi
    __asm test ecx, ecx
    __asm je empty
    __asm push esi
    __asm push ebx
    __asm mov ebx, ecx
    __asm mov esi, dword ptr [esp+14h]
    __asm test esi, 3
    __asm mov edi, dword ptr [esp+10h]
    __asm jne prefix
    __asm shr ecx, 2
    __asm jne word_probe
    __asm jmp tail
    __asm prefix:
    __asm mov al, byte ptr [esi]
    __asm inc esi
    __asm mov byte ptr [edi], al
    __asm inc edi
    __asm dec ecx
    __asm je copied
    __asm test al, al
    __asm je pad_align
    __asm test esi, 3
    __asm jne prefix
    __asm mov ebx, ecx
    __asm shr ecx, 2
    __asm jne word_probe
    __asm finish_words:
    __asm and ebx, 3
    __asm je copied
    __asm tail:
    __asm mov al, byte ptr [esi]
    __asm inc esi
    __asm mov byte ptr [edi], al
    __asm inc edi
    __asm test al, al
    __asm je tail_pad_dec
    __asm dec ebx
    __asm jne tail
    __asm copied:
    __asm mov eax, dword ptr [esp+10h]
    __asm pop ebx
    __asm pop esi
    __asm pop edi
    __asm ret
    __asm pad_align:
    __asm test edi, 3
    __asm je pad_words
    __asm pad_byte:
    __asm mov byte ptr [edi], al
    __asm inc edi
    __asm dec ecx
    __asm je padded
    __asm test edi, 3
    __asm jne pad_byte
    __asm pad_words:
    __asm mov ebx, ecx
    __asm shr ecx, 2
    __asm jne zero_words
    __asm tail_pad:
    __asm mov byte ptr [edi], al
    __asm inc edi
    __asm tail_pad_dec:
    __asm dec ebx
    __asm jne tail_pad
    __asm pop ebx
    __asm pop esi
    __asm empty:
    __asm mov eax, dword ptr [esp+8]
    __asm pop edi
    __asm ret
    __asm store_word:
    __asm mov dword ptr [edi], edx
    __asm add edi, 4
    __asm dec ecx
    __asm je finish_words
    __asm word_probe:
    __asm mov edx, 07efefeffh
    __asm mov eax, dword ptr [esi]
    __asm add edx, eax
    __asm xor eax, 0ffffffffh
    __asm xor eax, edx
    __asm mov edx, dword ptr [esi]
    __asm add esi, 4
    __asm test eax, 081010100h
    __asm je store_word
    __asm test dl, dl
    __asm je zero_dword
    __asm test dh, dh
    __asm je keep_byte
    __asm test edx, 00ff0000h
    __asm je keep_word
    __asm test edx, 0ff000000h
    __asm jne store_word
    __asm mov dword ptr [edi], edx
    __asm jmp wrote_zero
    __asm keep_word:
    __asm and edx, 0ffffh
    __asm mov dword ptr [edi], edx
    __asm jmp wrote_zero
    __asm keep_byte:
    __asm and edx, 0ffh
    __asm mov dword ptr [edi], edx
    __asm jmp wrote_zero
    __asm zero_dword:
    __asm xor edx, edx
    __asm mov dword ptr [edi], edx
    __asm wrote_zero:
    __asm add edi, 4
    __asm xor eax, eax
    __asm dec ecx
    __asm je finish_tail
    __asm zero_words:
    __asm xor eax, eax
    __asm zero_loop:
    __asm mov dword ptr [edi], eax
    __asm add edi, 4
    __asm dec ecx
    __asm jne zero_loop
    __asm finish_tail:
    __asm and ebx, 3
    __asm jne tail_pad
    __asm padded:
    __asm mov eax, dword ptr [esp+10h]
    __asm pop ebx
    __asm pop esi
    __asm pop edi
    __asm ret
}
